//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol NSSecureCoding;

@protocol APObjectStorable
- (_Bool)removeObjectAtPath:(NSString *)arg1 error:(id *)arg2;
- (id <NSSecureCoding>)objectStoredAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)storeObject:(id <NSSecureCoding>)arg1 atPath:(NSString *)arg2 error:(id *)arg3;
@end

