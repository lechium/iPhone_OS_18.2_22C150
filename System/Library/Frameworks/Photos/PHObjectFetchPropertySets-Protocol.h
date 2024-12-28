//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString;

@protocol PHObjectFetchPropertySets
+ (NSArray *)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)extendPropertiesToFetch:(NSMutableArray *)arg1 withPropertySetClass:(Class)arg2;
+ (Class)propertySetClassForPropertySet:(NSString *)arg1;
+ (NSDictionary *)propertySetAccessorsByPropertySet;
+ (NSSet *)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(NSSet *)arg1;
- (void)assertRequiredFetchPropertyHints:(unsigned long long)arg1;
- (void)fetchPropertySetsIfNeeded;
- (_Bool)hasLoadedPropertySet:(NSString *)arg1;
@end
