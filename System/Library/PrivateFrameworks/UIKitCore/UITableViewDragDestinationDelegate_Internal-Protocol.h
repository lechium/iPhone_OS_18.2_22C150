//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDragDestinationDelegate-Protocol.h>

@class NSIndexPath, UITableView;
@protocol UIDropSession;

@protocol UITableViewDragDestinationDelegate_Internal <UITableViewDragDestinationDelegate>

@optional
- (NSIndexPath *)_tableView:(UITableView *)arg1 targetIndexPathForProposedIndexPath:(NSIndexPath *)arg2 currentIndexPath:(NSIndexPath *)arg3 dropSession:(id <UIDropSession>)arg4;
@end

