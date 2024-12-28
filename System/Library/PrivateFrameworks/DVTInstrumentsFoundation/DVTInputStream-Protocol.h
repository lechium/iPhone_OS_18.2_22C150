//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class NSData;

@protocol DVTInputStream <NSObject>
@property(readonly, nonatomic) _Bool supportsPeek;
- (_Bool)hasData;
- (NSData *)peek:(unsigned long long)arg1 error:(id *)arg2;
- (NSData *)read:(unsigned long long)arg1 error:(id *)arg2;
@end
