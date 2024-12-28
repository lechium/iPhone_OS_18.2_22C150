//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSData;
@protocol SYChange, SYObject;

@protocol SYChangeSerializer <NSObject>
- (id <SYChange>)changeFromData:(NSData *)arg1 ofType:(long long)arg2;
- (NSData *)dataFromChange:(id <SYChange>)arg1;

@optional
- (id <SYChange>)decodeChangeData:(NSData *)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (NSData *)encodeSYChangeForBackwardCompatibility:(id <SYChange>)arg1 protocolVersion:(long long)arg2;
- (id <SYObject>)SYObjectWithData:(NSData *)arg1;
- (NSData *)dataWithSYObject:(id <SYObject>)arg1;
@end
