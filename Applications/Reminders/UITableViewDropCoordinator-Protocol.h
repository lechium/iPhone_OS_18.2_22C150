//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, UIDragItem, UIDragPreviewTarget, UITableViewDropPlaceholder, UITableViewDropProposal;
@protocol UIDragAnimating, UIDropSession, UITableViewDropPlaceholderContext;

@protocol UITableViewDropCoordinator <NSObject>
@property(readonly, nonatomic) id <UIDropSession> session;
@property(readonly, nonatomic) UITableViewDropProposal *proposal;
@property(readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property(readonly, nonatomic) NSArray *items;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (id <UITableViewDropPlaceholderContext>)dropItem:(UIDragItem *)arg1 toPlaceholder:(UITableViewDropPlaceholder *)arg2;
@end

