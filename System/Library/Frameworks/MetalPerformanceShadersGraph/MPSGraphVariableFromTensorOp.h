//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

__attribute__((visibility("hidden")))
@interface MPSGraphVariableFromTensorOp : MPSGraphOperation
{
}

- (id)initWithGraph:(id)arg1 tensor:(id)arg2 name:(id)arg3;	// IMP=0x0000000000eb9a70
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;	// IMP=0x0000000000eb9a50
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000eb95c0

@end
