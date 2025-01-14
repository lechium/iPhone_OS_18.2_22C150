//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDSQLGraphObjectRetriever, _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDPersonView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    GDSQLGraphObjectRetriever *_personRetriever;	// 16 = 0x10
    _PASSqliteDatabase *_db;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004887bc
- (void)enumeratePeopleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000048874b
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x00000000004885c9

@end

