//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC16SessionAssertion21PresentationAssertion : NSObject
{
    MISSING_TYPE *attributeAssertion;	// 8 = 0x8
    MISSING_TYPE *invalidationHandler;	// 16 = 0x10
    MISSING_TYPE *activityIdentifier;	// 32 = 0x20
    MISSING_TYPE *explanation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000d610
- (id)init;	// IMP=0x000000000000d5b0
@property(nonatomic, readonly) NSString *snaSessionIdentifier;
@property(nonatomic, readonly) unsigned long long snaState;
@property(nonatomic, readonly) unsigned long long snaInvalidationReason;
- (void)invalidate;	// IMP=0x000000000000d2c0
- (id)initWithExplanation:(id)arg1 activityIdentifier:(id)arg2 presentationState:(unsigned long long)arg3 invalidationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000d1e0
@property(nonatomic, copy) NSString *explanation;
@property(nonatomic, copy) NSString *activityIdentifier;
@property(nonatomic, readonly) NSString *description;

@end
