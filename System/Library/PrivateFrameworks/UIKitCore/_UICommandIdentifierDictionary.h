//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _UISelectorDictionary;

__attribute__((visibility("hidden")))
@interface _UICommandIdentifierDictionary : NSObject
{
    _UISelectorDictionary *_actionDictionary;	// 8 = 0x8
    NSMutableDictionary *_actionPropertyListDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001b23c3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001b23bac
- (unsigned long long)hash;	// IMP=0x0000000001b23b6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001b23b3f
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000001b23ad3
- (void)removeEntriesFromDictionary:(id)arg1;	// IMP=0x0000000001b23a23
- (id)intersectingIdentifiersFromDictionary:(id)arg1;	// IMP=0x0000000001b23828
- (_Bool)intersectsEntriesFromDictionary:(id)arg1;	// IMP=0x0000000001b2363b
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x0000000001b235c7
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;	// IMP=0x0000000001b2350f
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;	// IMP=0x0000000001b23485
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001b233e8
- (id)init;	// IMP=0x0000000001b23373

@end
