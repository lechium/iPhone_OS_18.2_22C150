//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/GCIUnknownObjC-Protocol.h>

@class NSString;

@protocol IOGCFastPathControlQueueInterface <GCIUnknownObjC>
- (int)get:(unsigned long long)arg1 options:(unsigned int)arg2 sample:(struct __IOGCFastPathSample *)arg3;
- (int)resetPosition:(unsigned long long)arg1;
- (int)getReadPosition:(unsigned long long *)arg1;
- (int)getActivePosition:(unsigned long long *)arg1;
- (_Bool)setProperty:(NSString *)arg1 value:(id)arg2;
- (id)getProperty:(NSString *)arg1;
@end
