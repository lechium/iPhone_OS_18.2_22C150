//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (AppleMediaServices_EncryptionResult)
+ (id)ams_dictionaryWithEncryptionResult:(CDStruct_0f015c83)arg1;	// IMP=0x00100000005522bf
- (CDStruct_0f015c83)ams_encryptionResult;	// IMP=0x0010000000552370
@property(readonly, nonatomic) NSString *ams_secureToken;
@property(readonly, nonatomic) NSDictionary *ams_privacyAcknowledgement;
@property(readonly, nonatomic) NSString *ams_lastName;
@property(readonly, nonatomic) _Bool ams_isManagedAppleID;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) long long ams_errorCode;
@property(readonly, nonatomic) NSNumber *ams_DSID;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSString *ams_altDSID;
@property(readonly, nonatomic) NSString *ams_username;
@property(readonly, nonatomic) NSDictionary *ams_accountFlags;
- (id)ams_dictionaryRemovingKeys:(id)arg1;	// IMP=0x0010000000553b7b
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0010000000553b15
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;	// IMP=0x0010000000553984
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;	// IMP=0x00100000005537e1
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000553791
- (id)ams_firstKeyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000005535b9
- (id)ams_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000553569
- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000553425
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;	// IMP=0x00100000005533a5
- (id)ams_componentsJoinedByString:(id)arg1;	// IMP=0x0010000000553228
- (id)ams_compactMapValues:(CDUnknownBlockType)arg1;	// IMP=0x00100000005530b9
- (id)ams_arrayUsingTransform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000552fa1
- (id)ams_sanitizedForSecureCoding;	// IMP=0x0010000000552df5
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)ams_valuesForKeys:(id)arg1;	// IMP=0x0010000000553ea1
- (id)ams_keysForChangedValuesComparedToDictionary:(id)arg1;	// IMP=0x0010000000553bfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

