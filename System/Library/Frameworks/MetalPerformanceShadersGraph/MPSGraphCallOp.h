//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPSGraphCallOp : MPSGraphOperation
{
    NSArray *_outputTypes;	// 80 = 0x50
    NSString *_symbolName;	// 88 = 0x58
    unsigned long long _inliningOption;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000e38a50
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;	// IMP=0x0000000000e38a20
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000e37ef0
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 outputTypes:(id)arg4 symbolName:(id)arg5 inliningOption:(unsigned long long)arg6 name:(id)arg7;	// IMP=0x0000000000e37c60

@end
