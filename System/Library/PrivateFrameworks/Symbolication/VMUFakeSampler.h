//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VMUSampler.h"

@class VMUProcessObjectGraph;

__attribute__((visibility("hidden")))
@interface VMUFakeSampler : VMUSampler
{
    VMUProcessObjectGraph *_graph;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000091741
- (id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long *)arg2;	// IMP=0x000000000009167e
- (id)initWithProcessObjectGraph:(id)arg1;	// IMP=0x0000000000091610

@end
