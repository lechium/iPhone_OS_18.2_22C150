//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class MPSGraphFFTDescriptor;

__attribute__((visibility("hidden")))
@interface MPSGraphFFTOp : MPSGraphOperation
{
    MPSGraphFFTDescriptor *_desc;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000d96430
- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;	// IMP=0x0000000000d96420
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000d95db0
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;	// IMP=0x0000000000d95c90

@end
