//
//  ViewController.m
//  TKSplitHandle
//
//  Created by Antoine Duchateau on 16/06/15.
//  Copyright (c) 2015 Taktik SA. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    //Set these to sensible values based on the splitted views
    self.handle.topOrRightMinSize = 20;
    self.handle.topOrRightMinSize = 30;
    
    //Setting the handle position and adjusting the views is as simple as that
    [self.handle setHandlePosition:120.0];
}

@end
