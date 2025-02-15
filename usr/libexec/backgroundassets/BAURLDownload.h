//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURLRequest;

@interface BAURLDownload
{
    NSURLRequest *_request;	// 16 = 0x10
    unsigned long long _amountDownloaded;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001308f
+ (_Bool)_cellularNetworkProhibitsDownloadUsingError:(id)arg1;	// IMP=0x0010000000004ce9
- (void).cxx_destruct;	// IMP=0x002000000001386c
@property unsigned long long amountDownloaded; // @synthesize amountDownloaded=_amountDownloaded;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
- (id)debugDescription;	// IMP=0x0010000000013757
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000136bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013648
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3 priority:(long long)arg4;	// IMP=0x001000000001361d
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3;	// IMP=0x00100000000135f2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000013544
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 essential:(_Bool)arg3 fileSize:(unsigned long long)arg4 applicationGroupIdentifier:(id)arg5 priority:(long long)arg6;	// IMP=0x001000000001312a
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 fileSize:(unsigned long long)arg3 applicationGroupIdentifier:(id)arg4;	// IMP=0x00100000000130ff
- (id)init;	// IMP=0x0010000000013097
@property(retain) NSError *bailError;
@property long long stopRequest;
- (void)demoteToBackground;	// IMP=0x0010000000004c0d
- (void)promoteToForeground;	// IMP=0x0010000000004b31
- (void)pauseDownload;	// IMP=0x0010000000004a69
- (void)_cancelDownload:(_Bool)arg1;	// IMP=0x0010000000004934
- (void)cancelDownloadSilently;	// IMP=0x001000000000491d
- (void)cancelDownload;	// IMP=0x0010000000004909
- (void)_informDelegateOfFailedDownloadWithError:(id)arg1 silentFailure:(_Bool)arg2;	// IMP=0x0010000000004745
- (void)_informDelegateOfFailedDownloadWithError:(id)arg1;	// IMP=0x0010000000004731
- (void)_informDelegateOfPausedDownloadWithWillImmediatelyResume:(_Bool)arg1;	// IMP=0x00100000000045bd
- (void)_handleChallenge:(id)arg1 authenticationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004353
- (void)_handleProgressWithBytesReceived:(unsigned long long)arg1 totalBytesRecieved:(unsigned long long)arg2 totalDownloadSize:(long long)arg3 resuming:(_Bool)arg4;	// IMP=0x0010000000003f68
- (void)_handleDownloadCompletionWithFileLocation:(id)arg1 response:(id)arg2;	// IMP=0x0010000000003da8
- (void)_handleDownloadFailureWithError:(id)arg1 resumeData:(id)arg2 response:(id)arg3;	// IMP=0x00100000000039c4
- (_Bool)_startDownloadWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000022b0
- (_Bool)startDownloadWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002225
- (void)dealloc;	// IMP=0x00100000000021a8

@end

