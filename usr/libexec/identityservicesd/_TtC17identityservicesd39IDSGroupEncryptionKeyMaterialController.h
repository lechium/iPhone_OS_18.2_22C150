//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupEncryptionKeyMaterial, MISSING_TYPE;

@interface _TtC17identityservicesd39IDSGroupEncryptionKeyMaterialController : NSObject
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *l;	// 0 = 0x0
    MISSING_TYPE *shortKIEnabled;	// 0 = 0x0
    MISSING_TYPE *q;	// 0 = 0x0
    MISSING_TYPE *groupID;	// 25 = 0x19
    MISSING_TYPE *cryptoHandler;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *isRatchetEnabled;	// 0 = 0x0
    MISSING_TYPE *persistenceManager;	// 0 = 0x0
    MISSING_TYPE *rollIndex;	// 8036352 = 0x7aa000
}

- (void).cxx_destruct;	// IMP=0x00400000004d1680
- (id)init;	// IMP=0x00100000004d9260
- (void)ensureKey;	// IMP=0x00100000004d8240
@property(nonatomic, readonly) IDSGroupEncryptionKeyMaterial *currentObjcMaterial;
- (void)dealloc;	// IMP=0x00100000004d15e0

@end

