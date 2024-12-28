//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol FontServicesProtocol
- (void)resetIssuedFontsFor:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)accessFontAsset:(NSString *)arg1;
- (void)synchronizeFontAssets:(NSArray *)arg1 reply:(void (^)(_Bool, NSDictionary *))arg2;
- (void)scheduleFontFilesDeletion:(NSArray *)arg1;
- (void)updatingUserFonts:(void (^)(void))arg1;
- (void)resumeAndShowAlertForSuspendedFontProviders:(void (^)(void))arg1;
- (void)fontChanged:(NSDictionary *)arg1 reply:(void (^)(void))arg2;
- (void)requestFonts:(NSString *)arg1 forClient:(NSXPCListenerEndpoint *)arg2 reply:(void (^)(_Bool))arg3;
- (void)requestFonts:(NSArray *)arg1 sceneID:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)checkinForFontPicker:(void (^)(NSDictionary *))arg1;
- (void)checkin:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end
