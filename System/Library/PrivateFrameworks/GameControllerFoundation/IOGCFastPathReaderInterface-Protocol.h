//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/GCIUnknownObjC-Protocol.h>

@protocol IOGCFastPathReaderInterface <GCIUnknownObjC>
- (int)readPreviousSample:(struct __IOGCFastPathSample *)arg1;
- (int)readNextSample:(struct __IOGCFastPathSample *)arg1;
- (int)readCurrentSample:(struct __IOGCFastPathSample *)arg1;
- (int)getReadPosition:(unsigned long long *)arg1;
- (int)reset;
@end
