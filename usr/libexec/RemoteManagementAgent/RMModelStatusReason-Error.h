//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelStatusReason.h>

@interface RMModelStatusReason (Error)
+ (id)assetIsNotReferencedByConfiguration:(id)arg1;	// IMP=0x0010000000069cdc
+ (id)configurationIsNotReferencedByAnActivation:(id)arg1;	// IMP=0x0010000000069af5
+ (id)configurationFailed:(id)arg1;	// IMP=0x001000000006990e
+ (id)activationFailed:(id)arg1;	// IMP=0x0010000000069727
+ (id)missingStateForDeclaration:(id)arg1;	// IMP=0x0010000000069404
+ (id)invalidPayloadForDeclaration:(id)arg1;	// IMP=0x00100000000690e1
+ (id)missingConfigurationIdentifiers:(id)arg1 forActivation:(id)arg2;	// IMP=0x0010000000068e4c
+ (id)missingAssetIdentifiers:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0010000000068bb7
+ (id)predicateEvaluationFailedWithError:(id)arg1 forActivation:(id)arg2;	// IMP=0x00100000000684e6
+ (id)predicateEvaluatedToFalseForActivation:(id)arg1;	// IMP=0x001000000006823f
+ (id)failedWithUnknownDeclarationType:(id)arg1;	// IMP=0x0010000000068136
+ (id)failedWithUnknownPayloadKeys:(id)arg1;	// IMP=0x001000000006802d
@end

