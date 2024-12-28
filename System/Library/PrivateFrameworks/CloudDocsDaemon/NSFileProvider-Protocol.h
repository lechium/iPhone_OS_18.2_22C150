//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class NSFileProviderMovingInfo, NSFileProviderPresenterInfo, NSFileProvidingInfo, NSOperationQueue, NSString, NSURL;

@protocol NSFileProvider <NSObject>
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly, copy) NSURL *_providedItemsURL;
- (void)_provideItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
@property(readonly, copy) NSString *_fileReactorID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)_movingItemAtURL:(NSURL *)arg1 withInfo:(NSFileProviderMovingInfo *)arg2 completionHandler:(void (^)(NSFileProviderMovingResponse *))arg3;
- (void)_movingItemAtURL:(NSURL *)arg1 requiresProvidingWithDestinationURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(NSURL *)arg3;
- (void)_providedItemAtURL:(NSURL *)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithInfo:(NSFileProviderPresenterInfo *)arg2;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(NSURL *)arg2;
- (void)_getPhysicalURLForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (NSURL *)_physicalURLForURL:(NSURL *)arg1;
- (void)_cancelProvidingItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(NSURL *)arg1 withInfo:(NSFileProvidingInfo *)arg2 completionHandler:(void (^)(NSFileProvidingResponse *))arg3;
- (void)_provideItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
