//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ATSDragToReorderTableViewController, NSIndexPath, UITableViewCell;

@protocol ATSDragToReorderTableViewControllerDraggableIndicators
- (void)dragTableViewController:(ATSDragToReorderTableViewController *)arg1 removeDraggableIndicatorsFromCell:(UITableViewCell *)arg2;
- (void)dragTableViewController:(ATSDragToReorderTableViewController *)arg1 hideDraggableIndicatorsOfCell:(UITableViewCell *)arg2;
- (void)dragTableViewController:(ATSDragToReorderTableViewController *)arg1 addDraggableIndicatorsToCell:(UITableViewCell *)arg2 forIndexPath:(NSIndexPath *)arg3;

@optional
- (UITableViewCell *)cellIdenticalToCellAtIndexPath:(NSIndexPath *)arg1 forDragTableViewController:(ATSDragToReorderTableViewController *)arg2;
@end

