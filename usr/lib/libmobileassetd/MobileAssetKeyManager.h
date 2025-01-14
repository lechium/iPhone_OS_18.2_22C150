//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAKeyManagerDownloadSessionDelegate, NSURLSession, NSURLSessionConfiguration, SUCoreLog;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MobileAssetKeyManager : NSObject
{
    SUCoreLog *_logger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_keyManagerQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ssoQueue;	// 24 = 0x18
    NSURLSession *_knoxSession;	// 32 = 0x20
    NSURLSessionConfiguration *_knoxSessionConfig;	// 40 = 0x28
    MAKeyManagerDownloadSessionDelegate *_downloadSessionDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000296bab
@property(retain, nonatomic) MAKeyManagerDownloadSessionDelegate *downloadSessionDelegate; // @synthesize downloadSessionDelegate=_downloadSessionDelegate;
@property(retain, nonatomic) NSURLSessionConfiguration *knoxSessionConfig; // @synthesize knoxSessionConfig=_knoxSessionConfig;
@property(retain, nonatomic) NSURLSession *knoxSession; // @synthesize knoxSession=_knoxSession;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *ssoQueue; // @synthesize ssoQueue=_ssoQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *keyManagerQueue; // @synthesize keyManagerQueue=_keyManagerQueue;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (long long)decryptContentEncryptedAssetAtURL:(id)arg1 assetAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000295adf
- (id)getDecryptionKey:(id)arg1 downloadOptions:(id)arg2 apTicket:(id)arg3 skipKnoxLookup:(_Bool)arg4 disableUI:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000029543c
- (id)getDecryptionKeyFromKnoxUsingAssetAttributes:(id)arg1 downloadOptions:(id)arg2 apTicket:(id)arg3 disableUI:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000029518a
- (id)getDecryptionKeyFromAssetMetadataOrDownloadOptions:(id)arg1 downloadOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000294f1e
- (id)copyPersonalizationSSOToken:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000294d3c
- (id)copyDawToken:(_Bool)arg1 useAppleConnect:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000294b54
- (int)decryptFileAtURL:(id)arg1 iv:(id)arg2 tag:(id)arg3 cryptor:(struct _CCCryptor *)arg4;	// IMP=0x000000000029445c
- (id)fetchDSMEKey;	// IMP=0x0000000000294454
- (id)getDecryptionKeyFromAssetMetadataOrDownloadOptionsInternal:(id)arg1 downloadOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002936ed
- (id)getDecryptionKeyFromKnoxUsingAssetAttributesInternal:(id)arg1 downloadOptions:(id)arg2 apTicket:(id)arg3 disableUI:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000292e93
- (id)requestServerForDecryptionKey:(id)arg1 recipientPrivateKey:(struct __SecKey *)arg2 downloadOptions:(id)arg3 disableUI:(_Bool)arg4 err:(id *)arg5;	// IMP=0x00000000002919d2
- (id)createGetDecryptionKeyRequestForKnox:(id)arg1 authData:(id)arg2 keyFetchBaseURLString:(id)arg3 apTicket:(id)arg4 assetAttributes:(id)arg5 error:(id *)arg6;	// IMP=0x00000000002912b8
- (id)base64EncodedStringFromString:(id)arg1;	// IMP=0x000000000029125e
- (void)appendPEMEncodedCertificate:(struct __SecCertificate *)arg1 toString:(id)arg2;	// IMP=0x00000000002911fb
- (void)appendPEMEncodedData:(id)arg1 type:(id)arg2 toString:(id)arg3;	// IMP=0x0000000000291127
- (id)copyPersonalizationSSOTokenInternal:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000290d51
- (id)copyDawTokenInternal:(_Bool)arg1 useAppleConnect:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000290992
- (id)copyDawTokenFromOverrides;	// IMP=0x0000000000290591
- (id)normalizedAuthToken:(id)arg1 source:(id)arg2;	// IMP=0x0000000000290332
- (id)copyDawTokenFileName;	// IMP=0x000000000028fcca
- (id)copyPreferencesValue:(id)arg1;	// IMP=0x000000000028fcb6
- (_Bool)isWellFormedTokenFileName:(id)arg1;	// IMP=0x000000000028f950
- (id)buildKeyManagerError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;	// IMP=0x000000000028f832
- (void)dealloc;	// IMP=0x000000000028f7f0
- (id)init;	// IMP=0x000000000028f5bb

@end

