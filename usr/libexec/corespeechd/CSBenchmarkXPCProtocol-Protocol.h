//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@protocol CSBenchmarkXPCProtocol
- (void)benchmarkOnDeviceCompilationCleanup:(void (^)(NSError *))arg1;
- (void)runNCModelWithConfig:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)runAudioInjectionOnly:(NSURL *)arg1 completion:(void (^)(NSError *, double, long long))arg2;
- (void)runNovDetectorWithConfig:(NSString *)arg1 configRoot:(NSString *)arg2 withUrl:(NSURL *)arg3 completion:(void (^)(NSError *, double, long long))arg4;
- (void)runODLDModelWithConfig:(NSString *)arg1 locale:(NSString *)arg2 inputText:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)runOSDAnalyzerWithConfig:(NSString *)arg1 withUrl:(NSURL *)arg2 completion:(void (^)(NSError *, double, long long))arg3;
- (void)runLstmPhsModelWithConfig:(NSString *)arg1 withUrl:(NSURL *)arg2 withConfigRoot:(NSString *)arg3 completion:(void (^)(NSError *, double, long long))arg4;
- (void)runVTSecondPassModelWithConfig:(NSString *)arg1 locale:(NSString *)arg2 withUrl:(NSURL *)arg3 completion:(void (^)(NSError *, double, long long))arg4;
- (void)pingpong:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
@end

