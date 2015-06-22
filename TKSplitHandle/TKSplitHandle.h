//
//  TKSplitHandle.h
//  TKSplitHandle
//
//  Created by Antoine Duchateau on 16/06/15.
//  Copyright (c) 2015 Taktik SA. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TKSplitHandle : NSImageView {
    NSTimer * _timer;
}

//This is what you set to change the splithandle position
@property (weak,readwrite) IBOutlet NSLayoutConstraint * mainConstraint;

@property (strong,readwrite) IBOutlet NSView * topOrRightView;
@property (strong,readwrite) IBOutlet NSView * bottomOrLeftView;

@property (assign,readwrite) float bottomOrLeftMinSize;
@property (assign,readwrite) float topOrRightMinSize;

//Set this to override default behavior: double click collapses top or right pane
@property (assign,readwrite) BOOL doubleClickCollapsesBottomOrLeft;

//Internal properties
@property (assign,readwrite) NSPoint dragStartPoint;
@property (assign,readwrite) float initialConstant;

//Vertical means: top and bottom views
- (BOOL) isVertical;
- (float) oppositeConstraint:(float) initialConstraint;

- (void) setHandlePosition:(float) position;
- (float) handlePosition;

- (BOOL) topOrRightViewIsCollapsed;
- (BOOL) bottomOrLeftViewIsCollapsed;

- (void) collapseView:(NSView *) view;
- (void) restoreView:(NSView *) view;

- (void) restoreTopOrRightView;
- (void) restoreBottomOrLeftView;

- (void) collapseTopOrRightView;
- (void) collapseBottomOrLeftView;

@end
