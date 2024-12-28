//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface RMStoreDataFetcher : NSObject
{
    NSURLSession *_URLSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009d433
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (_Bool)_validateResponseForURL:(id)arg1 statusCode:(id)arg2 headers:(id)arg3 fetchedData:(id)arg4 downloadURL:(id)arg5 error:(id *)arg6;	// IMP=0x001000000009d1f7
- (id)_userAgent;	// IMP=0x001000000009d0d9
- (id)_createRequestWithURL:(id)arg1 additionalHeaders:(id)arg2;	// IMP=0x001000000009cfd8
- (id)_dictionaryForResponse:(id)arg1 downloadedData:(id)arg2 downloadedURL:(id)arg3;	// IMP=0x001000000009cde3
- (void)_processDownloadResponseWithURL:(id)arg1 downloadURL:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009cad2
- (_Bool)_moveDownloadedFile:(id)arg1 downloadURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009c5c1
- (id)_downloadTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009c43e
- (void)_downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009c1c8
- (void)_downloadMDMDataAtURL:(id)arg1 downloadURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009c0ca
- (void)_processDataResponseWithURL:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009bdd3
- (id)_dataTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009bc4f
- (void)_fetchDataAtURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b9d9
- (void)_fetchMDMDataAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b8f5
- (id)_makeSession;	// IMP=0x001000000009b886
- (void)downloadResponseDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 additionalHeaders:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009b2c6
- (void)downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009af42
- (void)fetchResponseDataAtURL:(id)arg1 useDDM:(_Bool)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009ad4a
- (void)fetchDataAtURL:(id)arg1 useDDM:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ac64

@end
