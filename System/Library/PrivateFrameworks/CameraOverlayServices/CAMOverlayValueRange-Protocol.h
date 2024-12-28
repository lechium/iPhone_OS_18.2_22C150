//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraOverlayServices/NSObject-Protocol.h>

@protocol CAMOverlayValueRange;

@protocol CAMOverlayValueRange <NSObject>
@property(readonly, nonatomic, getter=isDiscrete) _Bool discrete;
@property(readonly, nonatomic, getter=isFloatingPoint) _Bool floatingPoint;
@property(readonly, nonatomic) unsigned long long rangeType;
@property(readonly, nonatomic) unsigned long long valueType;
- (_Bool)isValueExpectedType:(id)arg1;
- (_Bool)containsValue:(id)arg1;
- (_Bool)isEqualToRange:(id <CAMOverlayValueRange>)arg1;
@end
