//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPQuestion, RAPReportComposerCommentPart, RAPReportComposerCommentTableViewCell;
@protocol RAPCommentQuestionProtocol;

@interface RAPReportComposerCommentViewController
{
    RAPQuestion<RAPCommentQuestionProtocol> *_question;	// 8 = 0x8
    RAPReportComposerCommentPart *_commentPart;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000ed4db2
- (id)tableParts;	// IMP=0x0010000000ed4c26
@property(readonly, nonatomic) RAPReportComposerCommentTableViewCell *rapReportComposerCommentTableViewCell;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000ed4a33
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ed4954

// Remaining properties
@property(readonly, nonatomic) int backAction;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

