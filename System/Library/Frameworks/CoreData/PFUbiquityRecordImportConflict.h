//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSManagedObject, NSMutableDictionary, NSNumber, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordImportConflict : NSObject
{
    NSString *_conflictingObjectGlobalIDStr;	// 8 = 0x8
    NSManagedObject *_sourceObject;	// 16 = 0x10
    NSDictionary *_conflictingLogContent;	// 24 = 0x18
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;	// 32 = 0x20
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 40 = 0x28
    int _conflictingLogTransactionType;	// 48 = 0x30
    NSDate *_conflictLogDate;	// 56 = 0x38
    NSNumber *_conflictingLogTransactionNumber;	// 64 = 0x40
    NSArray *_transactionHistory;	// 72 = 0x48
    NSDictionary *_globalIDIndexToLocalIDURIMap;	// 80 = 0x50
    PFUbiquityImportContext *_importContext;	// 88 = 0x58
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x00600000002a949d
- (id)description;	// IMP=0x00000000002acb87
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;	// IMP=0x00000000002ac7b6
- (void)dealloc;	// IMP=0x00000000002a955d
- (id)init;	// IMP=0x00000000002a94f2

@end

