//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSModelBenchmarker : NSObject
{
}

- (void)runNCModelWithConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x004000000005e909
- (void)runNovDetectorWithConfig:(id)arg1 configRoot:(id)arg2 withUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e8e9
- (void)runODLDModelWithConfig:(id)arg1 locale:(id)arg2 inputText:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e8d3
- (void)runOSDAnalyzerWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e8b3
- (void)runVTSecondPassModelWithConfig:(id)arg1 locale:(id)arg2 withUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e893
- (void)runLstmPhsModelWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e873
- (void)pingpong:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e85d
- (id)init;	// IMP=0x001000000005e84f

@end

