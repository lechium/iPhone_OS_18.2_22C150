//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHObjectPropertySet-Protocol.h>

@class NSString, PHPerson;
@protocol PHFetchDictionaryAccessing;

@protocol PHPersonPropertySet <PHObjectPropertySet>
+ (NSString *)propertySetName;
- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 person:(PHPerson *)arg2 prefetched:(_Bool)arg3;
@end
