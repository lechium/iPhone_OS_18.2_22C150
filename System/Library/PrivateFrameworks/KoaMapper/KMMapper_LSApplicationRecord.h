//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface KMMapper_LSApplicationRecord : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSNumber *_languageCodeKey;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x0010000000016305
- (void).cxx_destruct;	// IMP=0x0000000000015fe1
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015ac2
- (_Bool)addAlternativeNamesFor:(id)arg1 forLanguage:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001589f
- (long long)targetItemType;	// IMP=0x0000000000015894
- (id)init;	// IMP=0x0000000000015819

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
