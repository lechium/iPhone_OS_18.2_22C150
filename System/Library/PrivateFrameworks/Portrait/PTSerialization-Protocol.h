//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Portrait/NSObject-Protocol.h>

@class NSDictionary, PTAtomStream, PTAtomWriter;

@protocol PTSerialization <NSObject>
+ (id)objectFromAtomStream:(PTAtomStream *)arg1;
+ (void)registerForSerialization;
- (_Bool)writeToAtomWriter:(PTAtomWriter *)arg1 options:(NSDictionary *)arg2;
- (unsigned long long)sizeOfSerializedObjectWithOptions:(NSDictionary *)arg1;
- (_Bool)supportsVersion:(unsigned long long)arg1;
@end

