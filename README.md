# TKSplitHandle
A NSSplitView replacement for autolayout

TKSplitHandle is a subclass of NSImageView.

In order to use it, you instantiate it in a nib, add constraints on the two views that will be splitted by the split handle in this way :

* Vertical mode:
  * ```H:|[TopView]|```
  * ```H:|[BottomView]|```
  * ```V:|[TopView]-0-[SplitHandle]-0-[BottomView]|```
  * And the main constraint that will determine the position of the handle : ```V:[SplitHandle]-200-|``` (for an inital size od 200)

* Horizontal mode:
  * ```V:|[LeftView]|```
  * ```V:|[RightView]|```
  * ```H:|[LeftView]-0-[SplitHandle]-0-[RightView]|```
  * And the main constraint that will determine the position of the handle : ```H:|-200-[SplitHandle]``` (for an inital size of 200)

You must also connect 3 outlets from the split handle towards :
  * the bottom or left view
  * the top or right view
  * the main constraint (see above)
  
Double/triple clicks collapse and restore the panes. The pane magnetically collapses when dragged below the minimum size of a pane.
