//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FocusEngine/NSObject-Protocol.h>

@class NSArray;
@protocol _FECoordinateSpace;

@protocol _FEFocusItemContainer <NSObject>
@property(readonly, nonatomic) id <_FECoordinateSpace> _focusCoordinateSpace;
- (NSArray *)_focusItemsInRect:(struct CGRect)arg1;
@end
