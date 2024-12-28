//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCViewRender : NSObject
{
}

+ (void)pageUserReadyWithTag:(unsigned long long)arg1;	// IMP=0x002000000002bcc6
+ (void)resourceRequestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002bc22
+ (void)resourceRequestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002bb7e
+ (void)rootViewModelPresentWithTag:(unsigned long long)arg1;	// IMP=0x001000000002bae0
+ (void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002ba3c
+ (void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b998
+ (void)jsCallDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b8f4
+ (void)jsCallDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b850
+ (void)jsStackBootstrapDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b7ac
+ (void)jsStackBootstrapDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b708
+ (void)requestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b664
+ (void)requestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b5c0
+ (void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2;	// IMP=0x001000000002b4d7
+ (void)bootstrapDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b433
+ (void)bootstrapDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b38f
+ (void)pageRequestedWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b2f1
+ (void)modelPrefetchDidEndWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b24d
+ (void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b1a9
+ (void)overlayRequestedWithTag:(unsigned long long)arg1;	// IMP=0x001000000002b10b
+ (id)requiredFieldNames;	// IMP=0x001000000002b091
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2;	// IMP=0x001000000002b08b
+ (id)log;	// IMP=0x001000000002af73
+ (id)category;	// IMP=0x001000000002af66
+ (id)subsystem;	// IMP=0x001000000002af59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
