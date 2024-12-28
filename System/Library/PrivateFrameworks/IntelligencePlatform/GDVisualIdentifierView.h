//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDSQLGraphObjectRetriever, _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDVisualIdentifierView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    _PASSqliteDatabase *_db;	// 16 = 0x10
    GDSQLGraphObjectRetriever *_personRetriever;	// 24 = 0x18
    GDSQLGraphObjectRetriever *_locationRetriever;	// 32 = 0x20
    GDSQLGraphObjectRetriever *_softwareRetriever;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000492a35
- (void)enumeratePeopleMatchingName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000049252c
- (void)enumeratePeopleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000492466
- (id)personForIdentifier:(id)arg1;	// IMP=0x000000000049223e
- (void)linkEntitiesForPerson:(id)arg1;	// IMP=0x0000000000491c02
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x00000000004919ee

@end
