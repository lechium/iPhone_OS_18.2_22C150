//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, UIView;

@interface MUConstraintLayoutInternal : NSObject
{
    MISSING_TYPE *layoutBuilder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005fb70
- (id)init;	// IMP=0x000000000005fb10
@property(nonatomic) __weak UIView *viewForForwardingSetNeedsUpdateConstraints;
- (void)activate;	// IMP=0x000000000005f680
- (void)prepare;	// IMP=0x000000000005f5d0
- (void)deactivate;	// IMP=0x000000000005f530
@property(nonatomic) long long mode;
@property(nonatomic, readonly) NSArray *layoutGuides;
@property(nonatomic, readonly) NSArray *layoutConstraints;

@end
