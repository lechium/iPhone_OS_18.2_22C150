//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString, NSURL, NSUUID;

@protocol _TtP8PaperKit20ExtensionXPCProtocol_
- (void)setMathEnabled:(_Bool)arg1;
- (void)setMathResult:(NSString *)arg1 expressionUUID:(NSUUID *)arg2;
- (void)setMathDocument:(NSData *)arg1;
- (void)searchDrawImageFor:(long long)arg1 reply:(void (^)(NSData *, double, double))arg2;
- (void)searchScrollToVisible:(long long)arg1;
- (void)searchFrameFor:(long long)arg1 reply:(void (^)(NSArray *))arg2;
- (void)endSearch;
- (void)searchFor:(NSString *)arg1 ignoreCase:(_Bool)arg2 wholeWords:(_Bool)arg3 reply:(void (^)(long long))arg4;
- (void)revertAllChanges;
- (void)reportSafeAreaInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)setPaperDocumentInlineThumbnailsVisible:(_Bool)arg1;
- (void)setUserInterfaceStyleWithUserInterfaceStyle:(long long)arg1;
- (void)setCanvasContentMode:(long long)arg1;
- (void)setHasLiveStreamMessenger:(_Bool)arg1;
- (void)setLinedPaperWithHorizontalLineSpacing:(double)arg1 verticalLineSpacing:(double)arg2 horizontalInset:(double)arg3;
- (void)setTool:(NSDictionary *)arg1;
- (void)setupWithData:(NSData *)arg1 transparentBackground:(_Bool)arg2;
- (void)receiveLiveStreamData:(NSData *)arg1;
- (void)receiveMulticastData:(NSData *)arg1;
- (void)loadBookmark:(NSData *)arg1 readOnly:(_Bool)arg2;
- (void)loadPaper:(NSString *)arg1 paperBookmark:(NSData *)arg2 coherenceContextBookmark:(NSData *)arg3 encrypted:(_Bool)arg4 userInterfaceState:(long long)arg5;
- (void)loadPaper:(NSString *)arg1 paperURL:(NSURL *)arg2 coherenceContextURL:(NSURL *)arg3 encrypted:(_Bool)arg4 userInterfaceState:(long long)arg5;
@end

