//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RouteStepItem;

@protocol StepListCell <NSObject>
+ (id)alloc;
+ (double)heightForItem:(RouteStepItem *)arg1 width:(double)arg2 maximumHeight:(double)arg3;
@property(nonatomic) _Bool shouldUseTextToBottomConstraint;
@property(retain, nonatomic) RouteStepItem *item;
@end
