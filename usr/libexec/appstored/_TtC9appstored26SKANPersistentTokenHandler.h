//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC9appstored15SKANBlindedData;

@interface _TtC9appstored26SKANPersistentTokenHandler : NSObject
{
    MISSING_TYPE *utClient;	// 2097285 = 0x200085
    MISSING_TYPE *timestamp;	// 25 = 0x19
    MISSING_TYPE *blindedData;	// 1095786335 = 0x41505f5f
    MISSING_TYPE *privateInput;	// 20306 = 0x4f52
}

+ (id)generateRandomPrivateInput;	// IMP=0x002000000001ba00
- (void).cxx_destruct;	// IMP=0x004000000001c280
- (id)init;	// IMP=0x001000000001c220
- (id)tryFinalizeWithPublicData:(id)arg1 finalizationDict:(id)arg2 pubCertString:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001c0a0
- (id)tryGenerateBlindedElement;	// IMP=0x001000000001bbd0
- (id)initWithRandomPrivateInput:(id)arg1;	// IMP=0x001000000001b830
@property(nonatomic, retain) _TtC9appstored15SKANBlindedData *blindedData; // @synthesize blindedData;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp;

@end
