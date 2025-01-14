//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APClientInfo, APContentDataInternal, APContext, NSString;
@protocol APIDAccount_Private;

@interface APMetricEnvironment : NSObject
{
    APContentDataInternal *_internalContent;	// 8 = 0x8
    APContext *_context;	// 16 = 0x10
    APClientInfo *_clientInfo;	// 24 = 0x18
    id <APIDAccount_Private> _idAccount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001547f2
@property(retain, nonatomic) id <APIDAccount_Private> idAccount; // @synthesize idAccount=_idAccount;
@property(retain, nonatomic) APClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) APContext *context; // @synthesize context=_context;
@property(retain, nonatomic) APContentDataInternal *internalContent; // @synthesize internalContent=_internalContent;
- (id)findInternalContentDataById:(id)arg1;	// IMP=0x001000000015471f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

