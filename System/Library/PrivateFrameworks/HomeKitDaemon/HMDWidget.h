//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDWidget : HMFObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x001000000034733f
- (void).cxx_destruct;	// IMP=0x000000000034730e
@property(readonly, copy) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000347183
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000346ff4
- (id)initWithIdentifier:(id)arg1 kind:(id)arg2;	// IMP=0x0000000000346f03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

