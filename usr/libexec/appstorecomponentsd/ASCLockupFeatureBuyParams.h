//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAppOffer, NSString;

@interface ASCLockupFeatureBuyParams : NSObject
{
    ASCAppOffer *_appOffer;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000014e9e
- (void).cxx_destruct;	// IMP=0x00200000000151e3
@property(readonly, copy, nonatomic) ASCAppOffer *appOffer; // @synthesize appOffer=_appOffer;
- (id)description;	// IMP=0x001000000001513b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015029
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000014fa3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000014f33
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000014ea6
- (id)initWithAppOffer:(id)arg1;	// IMP=0x0010000000014e2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

