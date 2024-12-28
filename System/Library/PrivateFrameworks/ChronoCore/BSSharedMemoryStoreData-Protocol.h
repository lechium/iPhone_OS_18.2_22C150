//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoCore/NSCopying-Protocol.h>

@protocol BSSharedMemoryStoreData <NSCopying>
+ (id)deserializeFromReader:(_Bool (^)(void *, unsigned long long))arg1;
@property(readonly, nonatomic) unsigned long long serializedDataLength;
- (_Bool)isEqual:(id)arg1;
- (_Bool)serializeToWriter:(_Bool (^)(void *, unsigned long long))arg1;
@end
