//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UITableViewDropPlaceholderContextImpl;

@protocol _UITableViewPlaceholderContextDelegate <NSObject>
- (_Bool)commitPlaceholderInsertionWithContext:(_UITableViewDropPlaceholderContextImpl *)arg1 dataSourceUpdates:(void (^)(NSIndexPath *))arg2;
- (_Bool)deletePlaceholder:(_UITableViewDropPlaceholderContextImpl *)arg1;
@end

