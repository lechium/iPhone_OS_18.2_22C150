//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol MAGraphProxy;

@protocol MAElement <NSObject>
@property(readonly, nonatomic) float weight;
@property(readonly, nonatomic) unsigned short domain;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly, nonatomic) id <MAGraphProxy> graph;
- (NSString *)visualString;
- (void)enumeratePropertiesUsingBlock:(void (^)(NSString *, id, _Bool *))arg1;
- (NSDictionary *)propertyDictionary;
- (NSSet *)propertyKeys;
- (unsigned long long)propertiesCount;
- (_Bool)hasProperties;
- (_Bool)isIdentifiedByProperties:(NSDictionary *)arg1;
- (_Bool)hasProperties:(NSDictionary *)arg1;
- (id)propertyForKey:(NSString *)arg1 kindOfClass:(Class)arg2;
- (id)propertyForKey:(NSString *)arg1;
@end

