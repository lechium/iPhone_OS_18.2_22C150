//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDUserDomainConceptEntity.h>

__attribute__((visibility("hidden")))
@interface HDMedicationUserDomainConceptEntity : HDUserDomainConceptEntity
{
}

+ (id)refreshOntologyContentForUserDomainConcept:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000008ad1
+ (id)deduplicateUserDomainConcept:(id)arg1 with:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x0080000000008ab8
+ (id)predicateMatchingSemanticDuplicatesOf:(id)arg1;	// IMP=0x0080000000008863
+ (_Bool)generateAPIObjectForUserDomainConcept:(id)arg1 apiObjectOut:(id *)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000082b4
+ (_Bool)supportsHidingSemanticDuplicates;	// IMP=0x00800000000082ac
+ (_Bool)encodesCodableUserDomainConceptSubclassData;	// IMP=0x00800000000082a4
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)arg1 propertyCollection:(id)arg2;	// IMP=0x0080000000008236
+ (id)predicateMatchingSemanticIdentifier:(id)arg1;	// IMP=0x008000000000808e
+ (Class)userDomainConceptSemanticIdentifierClass;	// IMP=0x008000000000807d
+ (Class)userDomainConceptClass;	// IMP=0x008000000000806c
+ (_Bool)willDeleteConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id *)arg6;	// IMP=0x0080000000007be3
+ (_Bool)updateConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000007bdb
+ (_Bool)insertConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000007b13
+ (id)privateDataEntities;	// IMP=0x0080000000007b06
+ (id)privateSubEntities;	// IMP=0x0080000000007af9
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x0080000000007a2b
+ (long long)protectionClass;	// IMP=0x0080000000007a20
+ (id)foreignKeys;	// IMP=0x0080000000007978
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0080000000007964
+ (id)databaseTable;	// IMP=0x0080000000007957

@end
