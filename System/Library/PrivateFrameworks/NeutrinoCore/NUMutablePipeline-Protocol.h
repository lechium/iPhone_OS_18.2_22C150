//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUPipeline-Protocol.h>

@class NSString, NUChannel, NUChannelMatching, NUIdentifier;
@protocol NUChannelPort, NUPipeline;

@protocol NUMutablePipeline <NUPipeline>
- (_Bool)connect:(id <NUChannelPort>)arg1 to:(id <NUPipeline>)arg2 output:(NUChannelMatching *)arg3 error:(out id *)arg4;
- (_Bool)connect:(id <NUPipeline>)arg1 input:(NUChannelMatching *)arg2 to:(id <NUChannelPort>)arg3 key:(NSString *)arg4 error:(out id *)arg5;
- (_Bool)connect:(id <NUPipeline>)arg1 input:(NUChannelMatching *)arg2 to:(id <NUChannelPort>)arg3 error:(out id *)arg4;
- (_Bool)connect:(id <NUPipeline>)arg1 input:(NUChannelMatching *)arg2 to:(id <NUPipeline>)arg3 output:(NUChannelMatching *)arg4 error:(out id *)arg5;
- (_Bool)connectInputPort:(id <NUChannelPort>)arg1 toOutputPort:(id <NUChannelPort>)arg2 error:(out id *)arg3;
- (_Bool)canConnectInputPort:(id <NUChannelPort>)arg1 toOutputPort:(id <NUChannelPort>)arg2 error:(out id *)arg3;
- (id <NUChannelPort>)addOutputChannel:(NUChannel *)arg1;
- (id <NUChannelPort>)addInputChannel:(NUChannel *)arg1;
- (id <NUPipeline>)addSourcePipeline;
- (id <NUPipeline>)addCIFilterPipelineWithName:(NSString *)arg1 error:(out id *)arg2;
- (id <NUPipeline>)addPipelineWithIdentifier:(NUIdentifier *)arg1 error:(out id *)arg2;
@end

