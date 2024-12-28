//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@class AVTimedMetadataGroup, MOVStreamVideoEncoderInterface, NSDictionary, NSString;

@protocol VideoEncoderInterfaceDelegate <NSObject>
- (_Bool)shouldEnableInProcessEncoding;
- (unsigned int)encoder:(MOVStreamVideoEncoderInterface *)arg1 codecTypeOverrideForstreamId:(NSString *)arg2;
- (_Bool)encoder:(MOVStreamVideoEncoderInterface *)arg1 configureSessionOverride:(struct OpaqueVTCompressionSession *)arg2 streamId:(NSString *)arg3;
- (NSDictionary *)encoder:(MOVStreamVideoEncoderInterface *)arg1 overrideVideoEncoderSpecificationForStreamId:(NSString *)arg2;
- (void)encoder:(MOVStreamVideoEncoderInterface *)arg1 encodingFailedForStream:(NSString *)arg2;
- (void)encoder:(MOVStreamVideoEncoderInterface *)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(AVTimedMetadataGroup *)arg3 presentationTime:(CDStruct_198678f7)arg4 streamId:(NSString *)arg5;
@end
