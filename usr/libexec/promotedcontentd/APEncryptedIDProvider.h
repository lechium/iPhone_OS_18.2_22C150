//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APEncryptedID;
@protocol APEncryptedIDProtocol;

@interface APEncryptedIDProvider : NSObject
{
    APEncryptedID *_currentEncryptedIDs;	// 8 = 0x8
    APEncryptedID *_oldEncryptedIDs;	// 16 = 0x10
}

+ (id)provider;	// IMP=0x004000000006bade
- (void).cxx_destruct;	// IMP=0x002000000006bf23
@property(retain) APEncryptedID *oldEncryptedIDs; // @synthesize oldEncryptedIDs=_oldEncryptedIDs;
@property(retain) APEncryptedID *currentEncryptedIDs; // @synthesize currentEncryptedIDs=_currentEncryptedIDs;
- (id)encryptedIDsForIDAccountPrivate:(id)arg1;	// IMP=0x001000000006bcd2
- (void)_encryptIDs;	// IMP=0x001000000006bbec
- (void)userAccountChanged;	// IMP=0x001000000006bb91
@property(readonly, nonatomic) id <APEncryptedIDProtocol> encryptedIDs;
- (id)init;	// IMP=0x001000000006bb33

@end

