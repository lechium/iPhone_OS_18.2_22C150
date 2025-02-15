//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIView, _UIDragSessionProperties, _UIInternalDraggingSessionSource;

@protocol _UIViewInternalDraggingSourceDelegate <NSObject>
- (_Bool)_viewRestrictsDragToSourceApp:(UIView *)arg1;
- (_UIDragSessionProperties *)_viewDragSessionProperties:(UIView *)arg1;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (long long)_dataOwnerOfDragFromView:(UIView *)arg1;
- (void)_viewFailedToDrag:(UIView *)arg1;
- (void)_view:(UIView *)arg1 willBeginDraggingWithSession:(_UIInternalDraggingSessionSource *)arg2;
- (_Bool)_canDragFromView:(UIView *)arg1;
- (NSArray *)_itemsToDragFromView:(UIView *)arg1;
@end

