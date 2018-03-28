//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFBaseViewController.h"

#import "TTFClearanceUsersViewDelegate-Protocol.h"
#import "TTFEliminateBonusViewDelegate-Protocol.h"
#import "TTFEliminateDefeatViewDelegate-Protocol.h"
#import "TTFEliminateLotteryViewDelegate-Protocol.h"
#import "TTFEliminateViewDelegate-Protocol.h"
#import "TTFInviteTaskPopViewDelegate-Protocol.h"
#import "TTFLateViewDelegate-Protocol.h"
#import "TTFLiveTrackerDataSource-Protocol.h"
#import "TTFPlayerDelegate-Protocol.h"
#import "TTFQAViewDelegate-Protocol.h"
#import "TTFQRCodeReaderViewControllerDelegate-Protocol.h"
#import "TTFQuizShowLiveRoomDelegate-Protocol.h"
#import "TTFQuizShowLiveRoomQuestionAnswerDelegate-Protocol.h"
#import "TTFQuizShowLiveRoomViewModelDebugProtocol-Protocol.h"
#import "TTFResurrectionDelegate-Protocol.h"
#import "TTFRevivalTaskDelegate-Protocol.h"
#import "TTFTeamBattleEntranceDelegate-Protocol.h"
#import "TTFTeamVCDelegate-Protocol.h"
#import "TTVideoEngineDelegate-Protocol.h"

@class LOTAnimationView, NSDate, NSDictionary, NSString, NSTimer, TTFClearanceUsersView, TTFCoinAnimationView, TTFContinuousTaskManager, TTFCountdownView, TTFInputInvitationCodeView, TTFLiveTracker, TTFPlayer, TTFQuizShowLiveRoomViewModel, TTFRadialGradientLayer, TTFResurrectionTipView, TTFRevivalTaskView, TTFTalkBoardViewController, TTFTeamBattleFormSuccessView, TTVideoEngine, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UISwitch, UITapGestureRecognizer, UIView;
@protocol TTFQAViewProtocol, TTFQuizShowLiveRoomViewControllerProtocol;

@interface TTFQuizShowLiveRoomViewController : TTFBaseViewController <TTFQuizShowLiveRoomQuestionAnswerDelegate, TTFQuizShowLiveRoomDelegate, TTFQAViewDelegate, TTFPlayerDelegate, TTFClearanceUsersViewDelegate, TTFResurrectionDelegate, TTFEliminateDefeatViewDelegate, TTFEliminateViewDelegate, TTFLateViewDelegate, TTVideoEngineDelegate, TTFQuizShowLiveRoomViewModelDebugProtocol, TTFLiveTrackerDataSource, TTFTeamBattleEntranceDelegate, TTFTeamVCDelegate, TTFQRCodeReaderViewControllerDelegate, TTFEliminateBonusViewDelegate, TTFEliminateLotteryViewDelegate, TTFRevivalTaskDelegate, TTFInviteTaskPopViewDelegate>
{
    _Bool _isFetchStreamInfoSuccess;
    _Bool _immediatelyEnterAfterIndex;
    _Bool _enterAgain;
    _Bool _isPlayRemoteVideo;
    TTFContinuousTaskManager *_continuousTaskManager;
    TTFRadialGradientLayer *_tvShowRadialGradientLayer;
    TTFPlayer *_player;
    TTFLiveTracker *_liveTracker;
    UIActivityIndicatorView *_playerIndicatorView;
    TTVideoEngine *_videoEngine;
    UIView *_videoEngineMaskView;
    LOTAnimationView *_logoLoopAnimationView;
    UIView *_containerView;
    UIView *_shareTopContainer;
    UIButton *_inputInvitationCodeButton;
    TTFResurrectionTipView *_resurrectionView;
    UIView *_redDotView;
    UILabel *_usersCountLabel;
    UIButton *_closeButton;
    id <TTFQAViewProtocol> _questionAnswerView;
    TTFCountdownView *_countdownView;
    TTFRevivalTaskView *_revivalTaskView;
    NSDictionary *_revivalTaskCreateTeamTrackData;
    UIButton *_loginButton;
    UILabel *_teamBattleTipLabel;
    TTFTalkBoardViewController *_talkboardViewController;
    UITapGestureRecognizer *_hideKeyboardGesture;
    LOTAnimationView *_fireworkAnimationView;
    TTFClearanceUsersView *_clearanceUsersView;
    TTFInputInvitationCodeView *_inputInvitationCodeView;
    TTFCoinAnimationView *_bonusPoolView;
    UIImageView *_tvShowLogoView;
    TTFTeamBattleFormSuccessView *_successFormTeamView;
    NSTimer *_logoLoopTimer;
    id <TTFQuizShowLiveRoomViewControllerProtocol> _delegate;
    NSString *_warmupVideoUrl;
    UIView *_debugToolContainer;
    UISwitch *_disableFrontierButton;
    UISwitch *_disableCommentButton;
    UILabel *_heartbeatLabel;
    UILabel *_userAuthLabel;
    TTFQuizShowLiveRoomViewModel *_viewModel;
}

+ (void)prepareForQuizShowLiveRoom;
@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *userAuthLabel; // @synthesize userAuthLabel=_userAuthLabel;
@property(retain, nonatomic) UILabel *heartbeatLabel; // @synthesize heartbeatLabel=_heartbeatLabel;
@property(retain, nonatomic) UISwitch *disableCommentButton; // @synthesize disableCommentButton=_disableCommentButton;
@property(retain, nonatomic) UISwitch *disableFrontierButton; // @synthesize disableFrontierButton=_disableFrontierButton;
@property(retain, nonatomic) UIView *debugToolContainer; // @synthesize debugToolContainer=_debugToolContainer;
@property(copy, nonatomic) NSString *warmupVideoUrl; // @synthesize warmupVideoUrl=_warmupVideoUrl;
@property(nonatomic) _Bool isPlayRemoteVideo; // @synthesize isPlayRemoteVideo=_isPlayRemoteVideo;
@property(nonatomic) __weak id <TTFQuizShowLiveRoomViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *logoLoopTimer; // @synthesize logoLoopTimer=_logoLoopTimer;
@property(nonatomic) _Bool enterAgain; // @synthesize enterAgain=_enterAgain;
@property(nonatomic) _Bool immediatelyEnterAfterIndex; // @synthesize immediatelyEnterAfterIndex=_immediatelyEnterAfterIndex;
@property(nonatomic) __weak TTFTeamBattleFormSuccessView *successFormTeamView; // @synthesize successFormTeamView=_successFormTeamView;
@property(retain, nonatomic) UIImageView *tvShowLogoView; // @synthesize tvShowLogoView=_tvShowLogoView;
@property(retain, nonatomic) TTFCoinAnimationView *bonusPoolView; // @synthesize bonusPoolView=_bonusPoolView;
@property(retain, nonatomic) TTFInputInvitationCodeView *inputInvitationCodeView; // @synthesize inputInvitationCodeView=_inputInvitationCodeView;
@property(retain, nonatomic) TTFClearanceUsersView *clearanceUsersView; // @synthesize clearanceUsersView=_clearanceUsersView;
@property(retain, nonatomic) LOTAnimationView *fireworkAnimationView; // @synthesize fireworkAnimationView=_fireworkAnimationView;
@property(retain, nonatomic) UITapGestureRecognizer *hideKeyboardGesture; // @synthesize hideKeyboardGesture=_hideKeyboardGesture;
@property(retain, nonatomic) TTFTalkBoardViewController *talkboardViewController; // @synthesize talkboardViewController=_talkboardViewController;
@property(retain, nonatomic) UILabel *teamBattleTipLabel; // @synthesize teamBattleTipLabel=_teamBattleTipLabel;
@property(nonatomic) _Bool isFetchStreamInfoSuccess; // @synthesize isFetchStreamInfoSuccess=_isFetchStreamInfoSuccess;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSDictionary *revivalTaskCreateTeamTrackData; // @synthesize revivalTaskCreateTeamTrackData=_revivalTaskCreateTeamTrackData;
@property(retain, nonatomic) TTFRevivalTaskView *revivalTaskView; // @synthesize revivalTaskView=_revivalTaskView;
@property(retain, nonatomic) TTFCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) id <TTFQAViewProtocol> questionAnswerView; // @synthesize questionAnswerView=_questionAnswerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *usersCountLabel; // @synthesize usersCountLabel=_usersCountLabel;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) TTFResurrectionTipView *resurrectionView; // @synthesize resurrectionView=_resurrectionView;
@property(retain, nonatomic) UIButton *inputInvitationCodeButton; // @synthesize inputInvitationCodeButton=_inputInvitationCodeButton;
@property(retain, nonatomic) UIView *shareTopContainer; // @synthesize shareTopContainer=_shareTopContainer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) LOTAnimationView *logoLoopAnimationView; // @synthesize logoLoopAnimationView=_logoLoopAnimationView;
@property(retain, nonatomic) UIView *videoEngineMaskView; // @synthesize videoEngineMaskView=_videoEngineMaskView;
@property(retain, nonatomic) TTVideoEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(retain, nonatomic) UIActivityIndicatorView *playerIndicatorView; // @synthesize playerIndicatorView=_playerIndicatorView;
@property(retain, nonatomic) TTFLiveTracker *liveTracker; // @synthesize liveTracker=_liveTracker;
@property(retain, nonatomic) TTFPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TTFRadialGradientLayer *tvShowRadialGradientLayer; // @synthesize tvShowRadialGradientLayer=_tvShowRadialGradientLayer;
@property(nonatomic) __weak TTFContinuousTaskManager *continuousTaskManager; // @synthesize continuousTaskManager=_continuousTaskManager;
- (void).cxx_destruct;
- (id)getPlayerVersion;
- (id)getActivityID;
- (void)didSelectJoinTeamByCode;
- (void)enterJoinViewController:(_Bool)arg1;
- (void)didSelectJoinTeamByScan;
- (void)didSelectCreateTeam;
- (void)checkQRCodeStr:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trackFormTeamFailWithUserCancel:(_Bool)arg1 isQRCode:(_Bool)arg2;
- (void)trackFormTeamSuccessWithQRCode:(_Bool)arg1;
- (void)teamViewControllerDidFailFromTeam:(id)arg1 isUserCancel:(_Bool)arg2;
- (void)teamViewControllerDidFormTeam:(id)arg1;
- (void)debug_didReceiveHeartbeat:(id)arg1;
- (void)debug_enable_comment:(id)arg1;
- (void)debug_enable_frontier:(id)arg1;
- (_Bool)isTVShowActivity;
- (id)loginTrackerDicWithSection:(id)arg1;
- (id)extraDict;
- (void)setCurUserCountAttributedString;
- (_Bool)needHideVideoEnginePlayerView;
- (void)onReachabilityChangedNotification:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)ttf_receiveRevivalSuccessNotification:(id)arg1;
- (void)ttf_inviteAddLifeNotification:(id)arg1;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)ttf_accountStatusChangeNotification:(id)arg1;
- (void)keyboardAnimationWithNotification:(id)arg1 isShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)ttfInviteTaskShowShareView:(id)arg1;
- (void)revivalTaskLifeNumChanged:(int)arg1;
- (void)revivalTaskOpenPopupView:(id)arg1;
- (void)revivalTaskCreateTeamFight:(id)arg1;
- (void)revivalTaskInputInviteCode:(id)arg1;
- (void)revivalTaskShare:(id)arg1;
- (void)eliminateLotteryView:(id)arg1 didShareToDest:(unsigned long long)arg2;
- (void)eliminateLotteryView:(id)arg1 didClickInviteButton:(id)arg2;
- (id)lateViewGetShareExtraParams:(id)arg1;
- (void)inviteFriendsOfLateView:(id)arg1;
- (id)eliminateViewGetShareExtraParams:(id)arg1 withQuestionAnswerUnit:(id)arg2;
- (void)shareQuestionOfEliminateView:(id)arg1 withQuestionAnswerUnit:(id)arg2;
- (void)shareRecordOfEliminateDefeatView:(id)arg1 defeatCount:(long long)arg2 questionAnswerUnit:(id)arg3;
- (id)eliminateDefeatViewGetShareExtraParams:(id)arg1 defeatCount:(long long)arg2 withQuestionAnswerUnit:(id)arg3;
- (id)eliminateBonusViewGetShareExtraParams:(long long)arg1 withQuestionAnswerUnit:(id)arg2;
- (void)openShareView:(long long)arg1 withQuestionAnswerUnit:(id)arg2;
- (void)resurrectShare;
- (id)shareParamsWithUrlSuffix:(id)arg1;
- (void)clearanceUsersViewDidHide:(id)arg1;
- (void)clearanceUsersViewTriggerSignUpNextActivityAction:(id)arg1 signUpTriggerBlock:(CDUnknownBlockType)arg2;
- (void)clearanceUsersViewTriggerShareAction:(id)arg1;
- (void)clearanceUsersViewEnterTopWinnerListViewController:(id)arg1;
- (void)videoEngineDidFinish:(id)arg1 error:(id)arg2;
- (void)videoEngineReadyToPlay:(id)arg1;
- (void)player:(id)arg1 recieveError:(id)arg2;
- (void)player:(id)arg1 loadStateChanged:(long long)arg2;
- (void)playerRenderStart:(id)arg1;
- (void)player:(id)arg1 willPlayURL:(id)arg2;
- (void)questionAnswerViewDidHidden:(id)arg1;
- (void)answerTimeoutOfFirstQuestionAnswerUnit:(id)arg1;
- (void)missedQuestionWithUnit:(id)arg1;
- (void)answerExceptionOfQuestionAnswerUnit:(id)arg1;
- (void)networkFailedWithQuestionAnswerUnit:(id)arg1;
- (void)didFailedWithQuestionAnswerUnit:(id)arg1;
- (void)showAnswerWithQuestionAnswerUnit:(id)arg1;
- (void)showQuestionWithQuestionAnswerUnit:(id)arg1;
- (void)showShareTaskTipView;
- (void)technicalDifficultyHappen;
- (void)quizShowUsedLife;
- (void)quizShowSuccess;
- (void)quizShowFinishedWithViewModel:(id)arg1;
- (void)quizShowActivityChangeToStatus:(int)arg1;
- (void)didFailedFetchingLiveStreamInfo;
- (void)fetchedLivingStreamInfo:(id)arg1;
- (void)quizShowLiveRoomUsersCountChange;
- (void)quizShowLiveRoomInitCompletedWithSuccess:(_Bool)arg1;
- (void)formTeam:(id)arg1;
- (void)signUp:(id)arg1;
- (void)help:(id)arg1;
- (id)revivalTaskTrackerDict;
- (void)preloadRevivalTaskView;
- (void)revivalTask:(id)arg1;
- (void)shareToDest:(unsigned long long)arg1 source:(id)arg2;
- (void)shareAction:(id)arg1;
- (void)shareToFriends:(id)arg1;
- (void)preloadShareImage;
- (void)inputInvitationCodeButtonDidClicked:(id)arg1 trackData:(id)arg2;
- (void)inputInvitationCodeButtonDidClicked:(id)arg1;
- (void)liveBackShare:(id)arg1;
- (void)updateShowResurrectionTimeAndCount;
- (void)setShowResurrectionCount:(long long)arg1;
- (long long)showResurrectionCount;
- (void)setLastShowResurrectionTime:(double)arg1;
- (double)lastShowResurrectionTime;
- (double)midNightInterval;
- (void)showAlertForResurrection;
- (_Bool)canShowAlertForResrrection;
- (void)leaveLiveRoom;
- (void)closeLiveRoom;
- (void)removeNotification;
- (void)registerNotification;
- (void)_updateButtonStatus;
- (void)uiComponentsInit;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 immediatelyEnterAfterIndex:(_Bool)arg2 enterAgain:(_Bool)arg3 delegate:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)endTrackStayPage:(_Bool)arg1;
- (void)startTrackStayPage;
- (void)trackerEnterLiveRoom;
- (long long)getWrongItemNum;
- (double)getWatchTimeTimeInterval;
- (double)getLiveTimeTimeInterval;
@property(retain, nonatomic) NSDate *stayBeginTime;
@property(nonatomic) long long itemNum;
@property(retain, nonatomic) NSDate *beginWatchTimeDate;
@property(retain, nonatomic) NSDate *beginLiveTimeDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
