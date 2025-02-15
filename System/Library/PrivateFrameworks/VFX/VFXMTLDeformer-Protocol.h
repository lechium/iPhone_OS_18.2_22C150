//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@protocol MTLBuffer, VFXMTLDeformerUpdateComputeContext;

@protocol VFXMTLDeformer <NSObject>
+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;
- (unsigned long long)updateWithComputeContext:(id <VFXMTLDeformerUpdateComputeContext>)arg1 positions:(id <MTLBuffer>)arg2 normals:(id <MTLBuffer>)arg3 tangents:(id <MTLBuffer>)arg4;
@end

